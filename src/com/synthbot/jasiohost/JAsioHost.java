/*
 *  Copyright 2009 Martin Roth (mhroth@gmail.com)
 * 
 *  This file is part of JAsioHost.
 *
 *  JVstHost is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  JVstHost is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *  
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with JAsioHost.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

package com.synthbot.jasiohost;

import java.util.ArrayList;
import java.util.List;

public class JAsioHost {
	
	private static AsioDriver asioDriver;
	
	private JAsioHost() {
		// no instance of this class allowed
	}
	
	static {
		System.loadLibrary("jasiohost");
	}
	
	public static AsioDriver getAsioDriver(String driverName) {
		if (driverName == null) {
			throw new NullPointerException();
		}
		if (!getDriverNames().contains(driverName)) {
			throw new IllegalArgumentException("The given driver name does not exist in the system registry. " +
					"Check getDriverNames().");
		}
		loadDriver(driverName);
		asioDriver = new AsioDriver();
		asioDriver.init();
		return asioDriver;
	}
	
	private static native boolean loadDriver(String driverName);
	
	public static native void removeCurrentDriver();
	
	public static List<String> getDriverNames() {
		String[] driverNames = new String[32];
		int numNames = getDriverNames(driverNames);
		List<String> nameList = new ArrayList<String>(numNames);
		for (String name : driverNames) {
			nameList.add(name);
		}
		return nameList;
	}
	private static native int getDriverNames(String[] driverNames);
	
	public static native String getCurrentDriverName();
	
	public static native int getCurrentDriverIndex();
	
	public static void main(String[] args) {
		List<String> driverNameList = JAsioHost.getDriverNames();
		AsioDriver asioDriver = JAsioHost.getAsioDriver(driverNameList.get(0));
		asioDriver.createBuffers(0, 2, asioDriver.getBufferPreferredSize());
		asioDriver.openControlPanel();
		asioDriver.start();
	}

}